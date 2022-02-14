
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mkuz_lzma {TYPE_1__* filters; int opt_lzma; scalar_t__ strm; } ;
typedef scalar_t__ lzma_stream ;
struct TYPE_2__ {int id; int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int *,int) ;
 struct mkuz_lzma* FUNC_2 (int) ;

void *
FUNC_3(int *VAR_5)
{
 struct mkuz_lzma *VAR_6;

 if (*VAR_5 == VAR_4)
  *VAR_5 = VAR_1;
 if (*VAR_5 < 0 || *VAR_5 > 9)
  FUNC_0(1, "provided compression level %d is invalid",
      *VAR_5);


 VAR_6 = FUNC_2(sizeof(struct mkuz_lzma));


 VAR_6->strm = (lzma_stream)VAR_2;
 if (FUNC_1(&VAR_6->opt_lzma, *VAR_5))
  FUNC_0(1, "Error loading LZMA preset");

 VAR_6->filters[0].id = VAR_0;
 VAR_6->filters[0].options = &VAR_6->opt_lzma;
 VAR_6->filters[1].id = VAR_3;

 return (void *)VAR_6;
}
