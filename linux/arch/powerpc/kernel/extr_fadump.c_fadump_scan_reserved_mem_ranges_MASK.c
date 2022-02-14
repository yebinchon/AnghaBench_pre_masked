
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 struct device_node* FUNC_1 (char*) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_3 (int const*,int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_5(void)
{
 struct device_node *VAR_1;
 const __be32 *VAR_2;
 int VAR_3, VAR_4 = -1;
 unsigned long VAR_5;

 VAR_1 = FUNC_1("/");
 if (!VAR_1)
  return VAR_4;

 VAR_2 = FUNC_2(VAR_1, "reserved-ranges", &VAR_3);
 if (!VAR_2)
  return VAR_4;





 for (VAR_5 = 0; VAR_5 < VAR_3 / (sizeof(*VAR_2) * 4); VAR_5++) {
  u64 VAR_6, VAR_7;

  VAR_6 = FUNC_3(VAR_2 + (VAR_5 * 4) + 0, 2);
  VAR_7 = FUNC_3(VAR_2 + (VAR_5 * 4) + 2, 2);

  if (VAR_7) {
   VAR_4 = FUNC_0(&VAR_0,
         VAR_6, VAR_6 + VAR_7);
   if (VAR_4 < 0) {
    FUNC_4("some reserved ranges are ignored!\n");
    break;
   }
  }
 }

 return VAR_4;
}
