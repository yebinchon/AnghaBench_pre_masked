
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hash; } ;
struct untracked_cache_dir {TYPE_1__ exclude_oid; } ;
struct read_data {scalar_t__ data; scalar_t__ end; struct untracked_cache_dir** ucd; } ;
struct TYPE_4__ {scalar_t__ rawsz; } ;


 int FUNC_0 (int ,scalar_t__) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(size_t VAR_1, void *VAR_2)
{
 struct read_data *VAR_3 = VAR_2;
 struct untracked_cache_dir *VAR_4 = VAR_3->ucd[VAR_1];
 if (VAR_3->data + VAR_0->rawsz > VAR_3->end) {
  VAR_3->data = VAR_3->end + 1;
  return;
 }
 FUNC_0(VAR_4->exclude_oid.hash, VAR_3->data);
 VAR_3->data += VAR_0->rawsz;
}
