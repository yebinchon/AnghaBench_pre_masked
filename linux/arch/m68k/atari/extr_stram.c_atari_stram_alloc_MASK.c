
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {char const* name; int start; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct resource*,unsigned long,int ,int ,int ,int *,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct resource*) ;
 struct resource* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int) ;
 int VAR_3 ;

void *FUNC_7(unsigned long VAR_4, const char *VAR_5)
{
 struct resource *VAR_6;
 int VAR_7;

 FUNC_5("atari_stram_alloc: allocate %lu bytes\n", VAR_4);


 VAR_4 = FUNC_0(VAR_4);

 VAR_6 = FUNC_4(sizeof(struct resource), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->name = VAR_5;
 VAR_7 = FUNC_1(&VAR_3, VAR_6, VAR_4, 0, VAR_2,
      VAR_1, ((void*)0), ((void*)0));
 if (VAR_7 < 0) {
  FUNC_6("atari_stram_alloc: allocate_resource() failed %d!\n",
         VAR_7);
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 FUNC_5("atari_stram_alloc: returning %pR\n", VAR_6);
 return FUNC_2(VAR_6->start);
}
