
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int chunk_sectors; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline sector_t FUNC_1(struct r5conf *VAR_0,
          sector_t VAR_1)
{
 sector_t VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0->chunk_sectors);
 return VAR_1;
}
