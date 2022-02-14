
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {char* file; } ;
struct ubd {char* file; TYPE_1__ cow; } ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,int*,int *,char**,int *,unsigned long long*,int*,int *,int*) ;

__attribute__((used)) static inline int FUNC_6(struct ubd *VAR_2, __u64 *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 int VAR_6;

 __u32 VAR_7;
 __u32 VAR_8;
 char *VAR_9;
 time_t VAR_10;
 unsigned long long VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_2->file && VAR_2->cow.file) {
  VAR_4 = VAR_2->cow.file;

  goto out;
 }

 VAR_5 = FUNC_4(VAR_2->file, FUNC_1(FUNC_0()), 0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_5(VAR_1, &VAR_5, &VAR_7, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_8, &VAR_13);

 FUNC_2(VAR_5);

 if(VAR_6 == -VAR_0)
  VAR_4 = VAR_2->file;
 else
  VAR_4 = VAR_9;

out:
 return FUNC_3(VAR_4, VAR_3);
}
