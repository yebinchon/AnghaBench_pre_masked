
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qib_devdata {int dummy; } ;
struct dds_init {int* reg_vals; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct qib_devdata*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct qib_devdata *VAR_2, struct dds_init *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8;

 VAR_8 = VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_6 = (VAR_8 & 0xF);
  VAR_8 >>= 4;
  VAR_7 = VAR_3->reg_vals[VAR_5];

  VAR_4 = FUNC_1(VAR_2, FUNC_0(0, 9, VAR_6), VAR_7, 0xFF);
  if (VAR_4 < 0)
   break;
 }
 return VAR_4;
}
