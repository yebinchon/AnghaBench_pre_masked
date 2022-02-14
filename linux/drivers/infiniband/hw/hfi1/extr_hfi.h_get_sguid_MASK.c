
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int * guids; } ;
struct hfi1_ibport {int dummy; } ;
typedef int __be64 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct hfi1_pportdata* FUNC_2 (struct hfi1_ibport*) ;

__attribute__((used)) static inline __be64 FUNC_3(struct hfi1_ibport *VAR_1, unsigned int VAR_2)
{
 struct hfi1_pportdata *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_2 >= VAR_0);
 return FUNC_1(VAR_3->guids[VAR_2]);
}
