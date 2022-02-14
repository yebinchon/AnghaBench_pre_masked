
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sa_open_data {size_t tmp_length; size_t tmp_size; struct ipv4_range* tmp_base; } ;
struct ipv4_range {void* end; void* start; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct sa_open_data*,int ) ;
 scalar_t__ FUNC_1 (struct ipv4_range*,int) ;

__attribute__((used)) static int FUNC_2(struct sa_open_data *VAR_1, u32 VAR_2,
  u32 VAR_3, gfp_t VAR_4)
{
 struct ipv4_range *VAR_5;
 int VAR_6;





 if ((VAR_6 = FUNC_0(VAR_1, VAR_4)) < 0)
  return VAR_6;


 if (VAR_1->tmp_length + 1 >= VAR_1->tmp_size) {
  size_t VAR_7 = VAR_1->tmp_size;
  struct ipv4_range *VAR_8 = VAR_1->tmp_base;

  VAR_1->tmp_size *= 2;
  VAR_1->tmp_base = (struct ipv4_range *)FUNC_1(VAR_1->tmp_base,
    sizeof(struct ipv4_range) * VAR_1->tmp_size);
  if (!VAR_1->tmp_base) {
   VAR_1->tmp_size = VAR_7;
   VAR_1->tmp_base = VAR_8;
   return -VAR_0;
  }
 }

 VAR_5 = &VAR_1->tmp_base[VAR_1->tmp_length++];
 VAR_5->start = VAR_2;
 VAR_5->end = VAR_3;

 return 0;
}
