
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pcre_uchar ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_1(const pcre_uchar *VAR_4)
{
if (!FUNC_0(*VAR_4)) return VAR_2;
VAR_4++;
while (FUNC_0(*VAR_4)) VAR_4++;
if (*VAR_4 == VAR_1) return VAR_3;

if (*VAR_4++ != VAR_0) return VAR_2;
if (*VAR_4 == VAR_1) return VAR_3;

if (!FUNC_0(*VAR_4)) return VAR_2;
VAR_4++;
while (FUNC_0(*VAR_4)) VAR_4++;

return (*VAR_4 == VAR_1);
}
