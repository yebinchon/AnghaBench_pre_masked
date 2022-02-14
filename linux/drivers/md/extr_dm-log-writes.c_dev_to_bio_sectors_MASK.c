
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_writes_c {int sectorshift; } ;
typedef int sector_t ;


 int VAR_0 ;

__attribute__((used)) static inline sector_t FUNC_0(struct log_writes_c *VAR_1,
       sector_t VAR_2)
{
 return VAR_2 << (VAR_1->sectorshift - VAR_0);
}
