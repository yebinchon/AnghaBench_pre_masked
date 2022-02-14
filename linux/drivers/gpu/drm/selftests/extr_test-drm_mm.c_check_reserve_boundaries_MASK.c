
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct boundary TYPE_1__ ;


typedef unsigned int u64 ;
struct drm_mm_node {int dummy; } ;
struct drm_mm {int dummy; } ;
struct boundary {unsigned int start; unsigned int size; char const* name; } ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct drm_mm*,int ) ;
 int FUNC_3 (char*,int,char const*,unsigned int,unsigned int) ;
 int FUNC_4 (struct drm_mm_node*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_5(struct drm_mm *VAR_0,
         unsigned int VAR_1,
         u64 VAR_2)
{
 const struct boundary {
  u64 start, size;
  const char *name;
 } VAR_3[] = {

  { (0), (0), "{ " "0" ", " "0" "}" },
  { (-VAR_2), (0), "{ " "-size" ", " "0" "}" },
  { (VAR_2), (0), "{ " "size" ", " "0" "}" },
  { (VAR_2 * VAR_1), (0), "{ " "size * count" ", " "0" "}" },
  { (-VAR_2), (VAR_2), "{ " "-size" ", " "size" "}" },
  { (-VAR_2), (-VAR_2), "{ " "-size" ", " "-size" "}" },
  { (-VAR_2), (2*VAR_2), "{ " "-size" ", " "2*size" "}" },
  { (0), (-VAR_2), "{ " "0" ", " "-size" "}" },
  { (VAR_2), (-VAR_2), "{ " "size" ", " "-size" "}" },
  { (VAR_1*VAR_2), (VAR_2), "{ " "count*size" ", " "size" "}" },
  { (VAR_1*VAR_2), (-VAR_2), "{ " "count*size" ", " "-size" "}" },
  { (VAR_1*VAR_2), (VAR_1*VAR_2), "{ " "count*size" ", " "count*size" "}" },
  { (VAR_1*VAR_2), (-VAR_1*VAR_2), "{ " "count*size" ", " "-count*size" "}" },
  { (VAR_1*VAR_2), (-(VAR_1+1)*VAR_2), "{ " "count*size" ", " "-(count+1)*size" "}" },
  { ((VAR_1+1)*VAR_2), (VAR_2), "{ " "(count+1)*size" ", " "size" "}" },
  { ((VAR_1+1)*VAR_2), (-VAR_2), "{ " "(count+1)*size" ", " "-size" "}" },
  { ((VAR_1+1)*VAR_2), (-2*VAR_2), "{ " "(count+1)*size" ", " "-2*size" "}" },

 };
 struct drm_mm_node VAR_4 = {};
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  if (!FUNC_2(VAR_0,
      FUNC_4(&VAR_4,
        VAR_3[VAR_5].start,
        VAR_3[VAR_5].size))) {
   FUNC_3("boundary[%d:%s] failed, count=%u, size=%lld\n",
          VAR_5, VAR_3[VAR_5].name, VAR_1, VAR_2);
   return 0;
  }
 }

 return 1;
}
