
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {unsigned int avail_out; unsigned char* next_in; void* next_out; int avail_in; } ;
struct TYPE_4__ {int done; TYPE_2__ zstream; int curpos; int mw; int p; } ;
typedef TYPE_1__ git_packfile_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 unsigned char* FUNC_3 (int ,int *,int ,int *) ;

ssize_t FUNC_4(git_packfile_stream *VAR_5, void *VAR_6, size_t VAR_7)
{
 unsigned char *VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (VAR_5->done)
  return 0;

 VAR_8 = FUNC_3(VAR_5->p, &VAR_5->mw, VAR_5->curpos, &VAR_5->zstream.avail_in);
 if (VAR_8 == ((void*)0))
  return VAR_0;

 VAR_5->zstream.next_out = VAR_6;
 VAR_5->zstream.avail_out = (unsigned int)VAR_7;
 VAR_5->zstream.next_in = VAR_8;

 VAR_10 = FUNC_2(&VAR_5->zstream, VAR_4);
 FUNC_1(&VAR_5->mw);

 VAR_5->curpos += VAR_5->zstream.next_in - VAR_8;
 VAR_9 = VAR_7 - VAR_5->zstream.avail_out;

 if (VAR_10 != VAR_2 && VAR_10 != VAR_3) {
  FUNC_0(VAR_1, "error reading from the zlib stream");
  return -1;
 }

 if (VAR_10 == VAR_3)
  VAR_5->done = 1;



 if (!VAR_9 && VAR_10 != VAR_3)
  return VAR_0;

 return VAR_9;

}
