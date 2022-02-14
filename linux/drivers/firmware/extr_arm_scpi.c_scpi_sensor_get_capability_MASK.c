
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int cap ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(u16 *VAR_1)
{
 __le16 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, ((void*)0), 0, &VAR_2,
    sizeof(VAR_2));
 if (!VAR_3)
  *VAR_1 = FUNC_0(VAR_2);

 return VAR_3;
}
