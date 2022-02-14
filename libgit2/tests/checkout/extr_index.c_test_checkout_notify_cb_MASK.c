
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct notify_data {int sha; int file; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_1__ git_diff_file ;
typedef int git_checkout_notify_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(
 git_checkout_notify_t VAR_1,
 const char *VAR_2,
 const git_diff_file *VAR_3,
 const git_diff_file *VAR_4,
 const git_diff_file *VAR_5,
 void *VAR_6)
{
 struct notify_data *VAR_7 = (struct notify_data *)VAR_6;

 FUNC_0(VAR_5);

 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_7->file, VAR_2);
 FUNC_1(0, FUNC_3(&VAR_3->id, VAR_7->sha));
 FUNC_1(0, FUNC_3(&VAR_4->id, VAR_7->sha));

 return 0;
}
