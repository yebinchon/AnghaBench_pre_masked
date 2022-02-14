
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ignored; int untracked; int updates; int dirty; int conflicts; } ;
typedef TYPE_1__ notify_counts ;
typedef char git_diff_file ;
typedef int git_checkout_notify_t ;







 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(
 git_checkout_notify_t VAR_0,
 const char *VAR_1,
 const git_diff_file *VAR_2,
 const git_diff_file *VAR_3,
 const git_diff_file *VAR_4,
 void *VAR_5)
{
 notify_counts *VAR_6 = VAR_5;

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 switch (VAR_0) {
 case 132: VAR_6->conflicts++; break;
 case 131: VAR_6->dirty++; break;
 case 128: VAR_6->updates++; break;
 case 129: VAR_6->untracked++; break;
 case 130: VAR_6->ignored++; break;
 default: break;
 }

 return 0;
}
