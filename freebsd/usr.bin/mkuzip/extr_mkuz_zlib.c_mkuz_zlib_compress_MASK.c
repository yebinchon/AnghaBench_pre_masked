
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uLongf ;
struct mkuz_zlib {int comp_level; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mkuz_blk {TYPE_1__ info; int data; scalar_t__ alen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int ,scalar_t__,int ) ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(void *VAR_1, const struct mkuz_blk *VAR_2, struct mkuz_blk *VAR_3)
{
 uLongf VAR_4;
 struct mkuz_zlib *VAR_5;

 VAR_5 = (struct mkuz_zlib *)VAR_1;

 VAR_4 = VAR_3->alen;
 if (FUNC_0(VAR_3->data, &VAR_4, VAR_2->data, VAR_2->info.len,
     VAR_5->comp_level) != VAR_0) {
  FUNC_1(1, "can't compress data: compress2() failed");

 }

 VAR_3->info.len = (uint32_t)VAR_4;
}
