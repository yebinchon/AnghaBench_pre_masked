
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct crat_subtype_memory {int dummy; } ;
struct crat_subtype_iolink {int dummy; } ;
struct crat_subtype_generic {int type; } ;
struct crat_subtype_computeunit {int dummy; } ;
struct crat_subtype_cache {int dummy; } ;
 int FUNC_0 (struct crat_subtype_cache*,struct list_head*) ;
 int FUNC_1 (struct crat_subtype_computeunit*,struct list_head*) ;
 int FUNC_2 (struct crat_subtype_iolink*,struct list_head*) ;
 int FUNC_3 (struct crat_subtype_memory*,struct list_head*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct crat_subtype_generic *VAR_0,
    struct list_head *VAR_1)
{
 struct crat_subtype_computeunit *VAR_2;
 struct crat_subtype_memory *VAR_3;
 struct crat_subtype_cache *VAR_4;
 struct crat_subtype_iolink *VAR_5;
 int VAR_6 = 0;

 switch (VAR_0->type) {
 case 131:
  VAR_2 = (struct crat_subtype_computeunit *)VAR_0;
  VAR_6 = FUNC_1(VAR_2, VAR_1);
  break;
 case 129:
  VAR_3 = (struct crat_subtype_memory *)VAR_0;
  VAR_6 = FUNC_3(VAR_3, VAR_1);
  break;
 case 133:
  VAR_4 = (struct crat_subtype_cache *)VAR_0;
  VAR_6 = FUNC_0(VAR_4, VAR_1);
  break;
 case 128:



  FUNC_4("Found TLB entry in CRAT table (not processing)\n");
  break;
 case 132:



  FUNC_4("Found CCOMPUTE entry in CRAT table (not processing)\n");
  break;
 case 130:
  VAR_5 = (struct crat_subtype_iolink *)VAR_0;
  VAR_6 = FUNC_2(VAR_5, VAR_1);
  break;
 default:
  FUNC_5("Unknown subtype %d in CRAT\n",
    VAR_0->type);
 }

 return VAR_6;
}
