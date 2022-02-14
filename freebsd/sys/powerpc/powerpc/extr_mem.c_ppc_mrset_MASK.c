
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range_softc {int mr_ndesc; struct mem_range_desc* mr_desc; } ;
struct mem_range_desc {int mr_len; int mr_base; int mr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct mem_range_desc*,int) ;

__attribute__((used)) static int
FUNC_1(struct mem_range_softc *VAR_5, struct mem_range_desc *VAR_6, int *VAR_7)
{
 int VAR_8;

 switch(*VAR_7) {
 case 128:
  for (VAR_8 = 0; VAR_8 < VAR_5->mr_ndesc; VAR_8++) {
   if (!VAR_5->mr_desc[VAR_8].mr_len) {
    VAR_5->mr_desc[VAR_8] = *VAR_6;
    VAR_5->mr_desc[VAR_8].mr_flags |= VAR_4;
    return (0);
   }
   if (VAR_5->mr_desc[VAR_8].mr_base == VAR_6->mr_base &&
       VAR_5->mr_desc[VAR_8].mr_len == VAR_6->mr_len)
    return (VAR_0);
  }
  return (VAR_2);
 case 129:
  for (VAR_8 = 0; VAR_8 < VAR_5->mr_ndesc; VAR_8++)
   if (VAR_5->mr_desc[VAR_8].mr_base == VAR_6->mr_base &&
       VAR_5->mr_desc[VAR_8].mr_len == VAR_6->mr_len) {
    FUNC_0(&VAR_5->mr_desc[VAR_8], sizeof(VAR_5->mr_desc[VAR_8]));
    return (0);
   }
  return (VAR_1);
 default:
  return (VAR_3);
 }

 return (0);
}
