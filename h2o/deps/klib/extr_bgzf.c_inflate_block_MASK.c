
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int avail_in; int total_out; int avail_out; int next_out; scalar_t__ next_in; int * zfree; int * zalloc; } ;
typedef TYPE_1__ z_stream ;
struct TYPE_8__ {int errcode; int uncompressed_block; scalar_t__ compressed_block; } ;
typedef TYPE_2__ BGZF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(BGZF* VAR_5, int VAR_6)
{
 z_stream VAR_7;
 VAR_7.zalloc = ((void*)0);
 VAR_7.zfree = ((void*)0);
 VAR_7.next_in = VAR_5->compressed_block + 18;
 VAR_7.avail_in = VAR_6 - 16;
 VAR_7.next_out = VAR_5->uncompressed_block;
 VAR_7.avail_out = VAR_0;

 if (FUNC_2(&VAR_7, -15) != VAR_3) {
  VAR_5->errcode |= VAR_1;
  return -1;
 }
 if (FUNC_0(&VAR_7, VAR_2) != VAR_4) {
  FUNC_1(&VAR_7);
  VAR_5->errcode |= VAR_1;
  return -1;
 }
 if (FUNC_1(&VAR_7) != VAR_3) {
  VAR_5->errcode |= VAR_1;
  return -1;
 }
 return VAR_7.total_out;
}
