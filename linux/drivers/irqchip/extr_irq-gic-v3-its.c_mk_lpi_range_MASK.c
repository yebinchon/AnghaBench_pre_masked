
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct lpi_range {void* span; void* base_id; } ;


 int VAR_0 ;
 struct lpi_range* FUNC_0 (int,int ) ;

__attribute__((used)) static struct lpi_range *FUNC_1(u32 VAR_1, u32 VAR_2)
{
 struct lpi_range *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  VAR_3->base_id = VAR_1;
  VAR_3->span = VAR_2;
 }

 return VAR_3;
}
