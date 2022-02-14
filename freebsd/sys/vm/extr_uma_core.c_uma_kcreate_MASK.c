
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uma_zone_t ;
typedef int uma_keg_t ;
typedef int uma_init ;
typedef int uma_fini ;
typedef int uint32_t ;
struct uma_kctor_args {size_t size; int align; int zone; int flags; int fini; int uminit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct uma_kctor_args*,int ,int ) ;

__attribute__((used)) static uma_keg_t
FUNC_1(uma_zone_t VAR_5, size_t VAR_6, uma_init VAR_7, uma_fini VAR_8,
  int VAR_9, uint32_t VAR_10)
{
 struct uma_kctor_args VAR_11;

 VAR_11.size = VAR_6;
 VAR_11.uminit = VAR_7;
 VAR_11.fini = VAR_8;
 VAR_11.align = (VAR_9 == VAR_1) ? VAR_4 : VAR_9;
 VAR_11.flags = VAR_10;
 VAR_11.zone = VAR_5;
 return (FUNC_0(VAR_3, &VAR_11, VAR_2, VAR_0));
}
