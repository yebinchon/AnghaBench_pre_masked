
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct idma64_hw_desc {scalar_t__ llp; scalar_t__ len; } ;
struct idma64_desc {size_t length; unsigned int ndesc; struct idma64_hw_desc* hw; } ;
struct idma64_chan {struct idma64_desc* desc; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct idma64_chan*,int ) ;
 scalar_t__ FUNC_2 (struct idma64_chan*,int ) ;

__attribute__((used)) static size_t FUNC_3(struct idma64_chan *VAR_2)
{
 struct idma64_desc *VAR_3 = VAR_2->desc;
 struct idma64_hw_desc *VAR_4;
 size_t VAR_5 = VAR_3->length;
 u64 VAR_6 = FUNC_2(VAR_2, VAR_1);
 u32 VAR_7 = FUNC_1(VAR_2, VAR_0);
 unsigned int VAR_8 = 0;

 do {
  VAR_4 = &VAR_3->hw[VAR_8];
  if (VAR_4->llp == VAR_6)
   break;
  VAR_5 -= VAR_4->len;
 } while (++VAR_8 < VAR_3->ndesc);

 if (!VAR_8)
  return VAR_5;


 VAR_5 += VAR_3->hw[--VAR_8].len;

 return VAR_5 - FUNC_0(VAR_7);
}
