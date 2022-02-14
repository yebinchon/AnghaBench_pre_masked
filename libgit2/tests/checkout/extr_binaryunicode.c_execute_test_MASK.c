
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void)
{
 git_oid VAR_4, VAR_5;
 git_commit *VAR_6;
 git_tree *VAR_7;
 git_checkout_options VAR_8 = VAR_0;

 FUNC_1(FUNC_8(&VAR_4, VAR_3, "refs/heads/branch1"));
 FUNC_1(FUNC_4(&VAR_6, VAR_3, &VAR_4));
 FUNC_1(FUNC_5(&VAR_7, VAR_6));

 VAR_8.checkout_strategy = VAR_1;

 FUNC_1(FUNC_2(VAR_3, (git_object *)VAR_7, &VAR_8));

 FUNC_9(VAR_7);
 FUNC_3(VAR_6);


 FUNC_1(FUNC_7(&VAR_5, "8ab005d890fe53f65eda14b23672f60d9f4ec5a1"));
 FUNC_1(FUNC_6(&VAR_4, "binaryunicode/lenna.jpg", VAR_2));
 FUNC_0(&VAR_4, &VAR_5);


 FUNC_1(FUNC_7(&VAR_5, "965b223880dd4249e2c66a0cc0b4cffe1dc40f5a"));
 FUNC_1(FUNC_6(&VAR_4, "binaryunicode/utf16_withbom_noeol_crlf.txt", VAR_2));
 FUNC_0(&VAR_4, &VAR_5);
}
