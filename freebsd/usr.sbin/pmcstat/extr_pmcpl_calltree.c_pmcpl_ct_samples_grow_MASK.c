
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcpl_ct_sample {unsigned int npmcs; int * sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 unsigned int VAR_2 ;
 int * FUNC_3 (int *,unsigned int,int) ;

__attribute__((used)) static void
FUNC_4(struct pmcpl_ct_sample *VAR_3)
{
 unsigned int VAR_4;


 if (VAR_2 <= VAR_3->npmcs)
                return;

 VAR_4 = VAR_3->npmcs +
     FUNC_2(VAR_2 - VAR_3->npmcs, VAR_1);
 VAR_3->sb = FUNC_3(VAR_3->sb, VAR_4, sizeof(unsigned));
 if (VAR_3->sb == ((void*)0))
  FUNC_1(VAR_0, "ERROR: out of memory");
 FUNC_0((char *)VAR_3->sb + VAR_3->npmcs * sizeof(unsigned),
     (VAR_4 - VAR_3->npmcs) * sizeof(unsigned));
 VAR_3->npmcs = VAR_4;
}
