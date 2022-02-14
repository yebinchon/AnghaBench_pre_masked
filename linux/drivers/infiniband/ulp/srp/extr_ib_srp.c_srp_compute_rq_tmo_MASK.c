
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ib_qp_attr {unsigned long long timeout; int retry_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint32_t FUNC_3(struct ib_qp_attr *VAR_3, int VAR_4)
{
 uint64_t VAR_5, VAR_6;
 uint32_t VAR_7;






 FUNC_0((VAR_4 & (VAR_1 | VAR_0)) !=
       (VAR_1 | VAR_0));







 VAR_5 = 4096 * (1ULL << VAR_3->timeout);
 VAR_6 = VAR_3->retry_cnt * 4 * VAR_5;
 FUNC_1(VAR_6, VAR_2);
 VAR_7 = FUNC_2(VAR_6 + 1000);

 return VAR_7;
}
