
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {int nr_sects; } ;
typedef int sector_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline sector_t FUNC_1(struct partition *VAR_0)
{
 return (sector_t)FUNC_0(&VAR_0->nr_sects);
}
