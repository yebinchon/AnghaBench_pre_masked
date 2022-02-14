
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {unsigned long start_section_nr; unsigned long state; int nid; int phys_device; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 struct memory_block* FUNC_1 (unsigned long) ;
 struct memory_block* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct memory_block*) ;
 unsigned long FUNC_5 (unsigned long) ;
 unsigned long VAR_4 ;

__attribute__((used)) static int FUNC_6(struct memory_block **VAR_5,
        unsigned long VAR_6, unsigned long VAR_7)
{
 struct memory_block *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8) {
  FUNC_3(&VAR_8->dev);
  return -VAR_0;
 }
 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->start_section_nr = VAR_6 * VAR_4;
 VAR_8->state = VAR_7;
 VAR_9 = FUNC_5(VAR_8->start_section_nr);
 VAR_8->phys_device = FUNC_0(VAR_9);
 VAR_8->nid = VAR_3;

 VAR_10 = FUNC_4(VAR_8);

 *VAR_5 = VAR_8;
 return VAR_10;
}
