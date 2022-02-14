
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uInt ;
struct TYPE_7__ {size_t avail_in; size_t avail_out; void* next_out; int * next_in; } ;
struct TYPE_6__ {scalar_t__ in_len; scalar_t__ type; TYPE_3__ z; scalar_t__ in; int flush; int zerr; } ;
typedef TYPE_1__ git_zstream ;
typedef int Bytef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int FUNC_3(
 void *VAR_4, size_t *VAR_5, git_zstream *VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;


 VAR_6->z.next_in = (Bytef *)VAR_6->in;


 if (VAR_6->in_len > VAR_1) {
  VAR_6->z.avail_in = VAR_1;
  VAR_6->flush = VAR_3;
 } else {
  VAR_6->z.avail_in = (uInt)VAR_6->in_len;
  VAR_6->flush = VAR_2;
 }
 VAR_7 = (size_t)VAR_6->z.avail_in;


 VAR_6->z.next_out = VAR_4;
 VAR_6->z.avail_out = (uInt)*VAR_5;

 if ((size_t)VAR_6->z.avail_out != *VAR_5)
  VAR_6->z.avail_out = VAR_1;
 VAR_9 = (size_t)VAR_6->z.avail_out;


 if (VAR_6->type == VAR_0)
  VAR_6->zerr = FUNC_1(&VAR_6->z, VAR_6->flush);
 else
  VAR_6->zerr = FUNC_0(&VAR_6->z, VAR_6->flush);

 if (FUNC_2(VAR_6))
  return -1;

 VAR_8 = (VAR_7 - VAR_6->z.avail_in);
 VAR_6->in_len -= VAR_8;
 VAR_6->in += VAR_8;

 *VAR_5 = (VAR_9 - VAR_6->z.avail_out);

 return 0;
}
