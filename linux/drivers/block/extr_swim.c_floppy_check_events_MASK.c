
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct floppy_state* private_data; } ;
struct floppy_state {scalar_t__ ejected; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct gendisk *VAR_1,
     unsigned int VAR_2)
{
 struct floppy_state *VAR_3 = VAR_1->private_data;

 return VAR_3->ejected ? VAR_0 : 0;
}
