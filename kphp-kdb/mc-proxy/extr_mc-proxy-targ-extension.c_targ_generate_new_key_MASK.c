
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_gather_extra {scalar_t__ magic; int extra_start; int extra_end; int slice_limit; int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3 (char *VAR_1, char *VAR_2, int VAR_3, void *VAR_4) {
  struct targ_gather_extra *VAR_5 = VAR_4;
  FUNC_0 (VAR_5->magic == VAR_0);
  int VAR_6 = 0;
  FUNC_1 (VAR_1 + VAR_6, VAR_2, VAR_5->extra_start);
  VAR_6 += VAR_5->extra_start;
  VAR_6 += FUNC_2 (VAR_1 + VAR_6, VAR_5->flags, VAR_5->slice_limit);
  FUNC_1 (VAR_1 + VAR_6, VAR_2 + VAR_5->extra_end, VAR_3 - VAR_5->extra_end);
  VAR_6 += VAR_3 - VAR_5->extra_end;
  return VAR_6;
}
