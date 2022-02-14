
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_filter {int dummy; } ;
struct filtered_istream {scalar_t__ input_finished; scalar_t__ o_ptr; scalar_t__ o_end; scalar_t__ i_ptr; scalar_t__ i_end; struct stream_filter* filter; struct git_istream* upstream; } ;
struct TYPE_2__ {struct filtered_istream filtered; } ;
struct git_istream {int size; int * vtbl; TYPE_1__ u; } ;


 int VAR_0 ;
 struct git_istream* FUNC_0 (int) ;

__attribute__((used)) static struct git_istream *FUNC_1(struct git_istream *VAR_1,
      struct stream_filter *VAR_2)
{
 struct git_istream *VAR_3 = FUNC_0(sizeof(*VAR_3));
 struct filtered_istream *VAR_4 = &(VAR_3->u.filtered);

 VAR_3->vtbl = &VAR_0;
 VAR_4->upstream = VAR_1;
 VAR_4->filter = VAR_2;
 VAR_4->i_end = VAR_4->i_ptr = 0;
 VAR_4->o_end = VAR_4->o_ptr = 0;
 VAR_4->input_finished = 0;
 VAR_3->size = -1;
 return VAR_3;
}
