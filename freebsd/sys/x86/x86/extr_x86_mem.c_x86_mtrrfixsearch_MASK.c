
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct mem_range_softc {struct mem_range_desc* mr_desc; } ;
struct mem_range_desc {scalar_t__ mr_base; scalar_t__ mr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct mem_range_desc *
FUNC_0(struct mem_range_softc *VAR_3, u_int64_t VAR_4)
{
 struct mem_range_desc *VAR_5;
 int VAR_6;

 for (VAR_6 = 0, VAR_5 = VAR_3->mr_desc; VAR_6 < VAR_2 + VAR_0 + VAR_1;
      VAR_6++, VAR_5++)
  if (VAR_4 >= VAR_5->mr_base &&
      VAR_4 < VAR_5->mr_base + VAR_5->mr_len)
   return (VAR_5);
 return (((void*)0));
}
