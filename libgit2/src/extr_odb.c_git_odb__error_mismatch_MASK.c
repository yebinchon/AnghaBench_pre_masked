
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int expected_oid ;
typedef int actual_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (char*,int,int const*) ;

int FUNC_2(const git_oid *VAR_3, const git_oid *VAR_4)
{
 char VAR_5[VAR_2 + 1], VAR_6[VAR_2 + 1];

 FUNC_1(VAR_5, sizeof(VAR_5), VAR_3);
 FUNC_1(VAR_6, sizeof(VAR_6), VAR_4);

 FUNC_0(VAR_1, "object hash mismatch - expected %s but got %s",
  VAR_5, VAR_6);

 return VAR_0;
}
