
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct ctl_io_stats {int alloc_len; int status; int num_items; int fill_len; int flags; TYPE_1__ timestamp; struct ctl_io_stats* stats; } ;
struct ctl_get_io_stats {int alloc_len; int status; int num_items; int fill_len; int flags; TYPE_1__ timestamp; struct ctl_get_io_stats* stats; } ;
typedef int get_stats ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct ctl_io_stats*) ;
 int FUNC_3 (int,int ,struct ctl_io_stats*) ;
 struct ctl_io_stats* FUNC_4 (int) ;
 int FUNC_5 (struct ctl_io_stats*,int ,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_6, int *VAR_7, int *VAR_8, struct ctl_io_stats **VAR_9,
  struct timespec *VAR_10, int *VAR_11)
{
 struct ctl_get_io_stats VAR_12;
 int VAR_13 = 0;

 if (*VAR_7 == 0)
  *VAR_7 = VAR_5;
retry:
 if (*VAR_9 == ((void*)0))
  *VAR_9 = FUNC_4(sizeof(**VAR_9) * *VAR_7);

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.alloc_len = *VAR_7 * sizeof(**VAR_9);
 FUNC_5(*VAR_9, 0, VAR_12.alloc_len);
 VAR_12.stats = *VAR_9;

 if (FUNC_3(VAR_6, (*VAR_11 & VAR_0) ? VAR_3 :
     VAR_2, &VAR_12) == -1)
  FUNC_0(1, "CTL_GET_*_STATS ioctl returned error");

 switch (VAR_12.status) {
 case 128:
  break;
 case 130:
  FUNC_0(1, "CTL_GET_*_STATS ioctl returned CTL_SS_ERROR");
  break;
 case 129:
  if (VAR_13 >= 2)
   FUNC_1(1, "CTL_GET_*_STATS returned NEED_MORE_SPACE again");
  *VAR_7 = VAR_12.num_items * 5 / 4;
  FUNC_2(*VAR_9);
  *VAR_9 = ((void*)0);
  VAR_13++;
  goto retry;
  break;
 default:
  FUNC_1(1, "CTL_GET_*_STATS ioctl returned unknown status %d",
       VAR_12.status);
  break;
 }

 *VAR_8 = VAR_12.fill_len / sizeof(**VAR_9);
 VAR_10->tv_sec = VAR_12.timestamp.tv_sec;
 VAR_10->tv_nsec = VAR_12.timestamp.tv_nsec;
 if (VAR_12.flags & VAR_4)
  *VAR_11 |= VAR_1;
 else
  *VAR_11 &= ~VAR_1;

 return (0);
}
