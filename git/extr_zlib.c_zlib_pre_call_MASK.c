
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* avail_out; void* avail_in; int total_out; int total_in; int next_out; int next_in; } ;
struct TYPE_5__ {int avail_out; TYPE_1__ z; int avail_in; int total_out; int total_in; int next_out; int next_in; } ;
typedef TYPE_2__ git_zstream ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(git_zstream *VAR_0)
{
 VAR_0->z.next_in = VAR_0->next_in;
 VAR_0->z.next_out = VAR_0->next_out;
 VAR_0->z.total_in = VAR_0->total_in;
 VAR_0->z.total_out = VAR_0->total_out;
 VAR_0->z.avail_in = FUNC_0(VAR_0->avail_in);
 VAR_0->z.avail_out = FUNC_0(VAR_0->avail_out);
}
