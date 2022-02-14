
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_partno; int bi_disk; } ;


 char const* FUNC_0 (int ,int ,char*) ;

const char *FUNC_1(struct bio *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_0->bi_disk, VAR_0->bi_partno, VAR_1);
}
