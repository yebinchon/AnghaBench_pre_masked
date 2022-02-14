
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int erase_failed; int write_failed; int read_failed_gc; int read_empty; int read_high_ecc; int read_failed; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct pblk *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0,
   "read_failed=%lu, read_high_ecc=%lu, read_empty=%lu, read_failed_gc=%lu, write_failed=%lu, erase_failed=%lu\n",
   FUNC_0(&VAR_1->read_failed),
   FUNC_0(&VAR_1->read_high_ecc),
   FUNC_0(&VAR_1->read_empty),
   FUNC_0(&VAR_1->read_failed_gc),
   FUNC_0(&VAR_1->write_failed),
   FUNC_0(&VAR_1->erase_failed));

 return VAR_3;
}
