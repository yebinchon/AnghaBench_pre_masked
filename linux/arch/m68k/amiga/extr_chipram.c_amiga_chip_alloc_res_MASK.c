
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*,unsigned long,int ,int ,int ,int *,int *) ;
 int FUNC_3 (unsigned long,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;

void *FUNC_6(unsigned long VAR_4, struct resource *VAR_5)
{
 int VAR_6;


 VAR_4 = FUNC_0(VAR_4);

 FUNC_4("amiga_chip_alloc_res: allocate %lu bytes\n", VAR_4);
 VAR_6 = FUNC_2(&VAR_3, VAR_5, VAR_4, 0, VAR_1,
      VAR_0, ((void*)0), ((void*)0));
 if (VAR_6 < 0) {
  FUNC_5("amiga_chip_alloc_res: allocate_resource() failed %d!\n",
         VAR_6);
  return ((void*)0);
 }

 FUNC_3(VAR_4, &VAR_2);
 FUNC_4("amiga_chip_alloc_res: returning %pR\n", VAR_5);
 return FUNC_1(VAR_5->start);
}
