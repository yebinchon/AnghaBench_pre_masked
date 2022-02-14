
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
typedef int stream ;
typedef int off_t ;
struct TYPE_6__ {unsigned char* next_out; int avail_out; int total_out; unsigned char* next_in; int avail_in; } ;
typedef TYPE_1__ git_zstream ;
typedef int delta_head ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned char const**,unsigned char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 unsigned char* FUNC_6 (struct packed_git*,struct pack_window**,int ,int *) ;

unsigned long FUNC_7(struct packed_git *VAR_4,
      struct pack_window **VAR_5,
      off_t VAR_6)
{
 const unsigned char *VAR_7;
 unsigned char VAR_8[20], *VAR_9;
 git_zstream VAR_10;
 int VAR_11;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.next_out = VAR_8;
 VAR_10.avail_out = sizeof(VAR_8);

 FUNC_4(&VAR_10);
 do {
  VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_6, &VAR_10.avail_in);
  VAR_10.next_in = VAR_9;
  VAR_11 = FUNC_2(&VAR_10, VAR_1);
  VAR_6 += VAR_10.next_in - VAR_9;
 } while ((VAR_11 == VAR_2 || VAR_11 == VAR_0) &&
   VAR_10.total_out < sizeof(VAR_8));
 FUNC_3(&VAR_10);
 if ((VAR_11 != VAR_3) && VAR_10.total_out != sizeof(VAR_8)) {
  FUNC_0("delta data unpack-initial failed");
  return 0;
 }




 VAR_7 = VAR_8;


 FUNC_1(&VAR_7, VAR_8+sizeof(VAR_8));


 return FUNC_1(&VAR_7, VAR_8+sizeof(VAR_8));
}
