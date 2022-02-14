
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct edid {int extensions; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int,int *) ;
 int FUNC_1 (struct cec_adapter*,int ,int) ;

void FUNC_2(struct cec_adapter *VAR_2,
          const struct edid *VAR_3)
{
 u16 VAR_4 = VAR_0;

 if (VAR_3 && VAR_3->extensions)
  VAR_4 = FUNC_0((const u8 *)VAR_3,
    VAR_1 * (VAR_3->extensions + 1), ((void*)0));
 FUNC_1(VAR_2, VAR_4, 0);
}
