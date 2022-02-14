
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long next_in; unsigned long next_out; scalar_t__ total_out; scalar_t__ total_in; } ;
struct TYPE_5__ {unsigned long next_in; unsigned long next_out; scalar_t__ total_out; scalar_t__ total_in; unsigned long avail_in; unsigned long avail_out; TYPE_1__ z; } ;
typedef TYPE_2__ git_zstream ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(git_zstream *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2;

 VAR_1 = VAR_0->z.next_in - VAR_0->next_in;
 VAR_2 = VAR_0->z.next_out - VAR_0->next_out;
 if (VAR_0->z.total_out != VAR_0->total_out + VAR_2)
  FUNC_0("total_out mismatch");
 if (VAR_0->z.total_in != VAR_0->total_in + VAR_1)
  FUNC_0("total_in mismatch");

 VAR_0->total_out = VAR_0->z.total_out;
 VAR_0->total_in = VAR_0->z.total_in;
 VAR_0->next_in = VAR_0->z.next_in;
 VAR_0->next_out = VAR_0->z.next_out;
 VAR_0->avail_in -= VAR_1;
 VAR_0->avail_out -= VAR_2;
}
