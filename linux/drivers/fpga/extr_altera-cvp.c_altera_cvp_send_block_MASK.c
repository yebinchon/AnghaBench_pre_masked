
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_cvp_conf {int (* write_data ) (struct altera_cvp_conf*,int const) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct altera_cvp_conf*,int const) ;
 int FUNC_2 (struct altera_cvp_conf*,int const) ;

__attribute__((used)) static int FUNC_3(struct altera_cvp_conf *VAR_0,
     const u32 *VAR_1, size_t VAR_2)
{
 u32 VAR_3, VAR_4 = VAR_2 / sizeof(u32);
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_0->write_data(VAR_0, *VAR_1++);


 VAR_6 = VAR_2 % sizeof(u32);
 if (VAR_6) {
  VAR_3 = FUNC_0(VAR_6 * 8) - 1;
  if (VAR_3)
   VAR_0->write_data(VAR_0, *VAR_1 & VAR_3);
 }

 return 0;
}
