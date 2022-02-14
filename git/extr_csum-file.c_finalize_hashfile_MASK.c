
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashfile {scalar_t__ fd; scalar_t__ check_fd; int name; int buffer; int ctx; } ;
struct TYPE_2__ {int rawsz; int (* final_fn ) (int ,int *) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct hashfile*,int ,int ) ;
 int FUNC_4 (struct hashfile*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (unsigned char*,int ) ;
 int FUNC_7 (struct hashfile*) ;
 int FUNC_8 (scalar_t__,char*,int) ;
 int FUNC_9 (int ,int *) ;
 TYPE_1__* VAR_3 ;

int FUNC_10(struct hashfile *VAR_4, unsigned char *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 FUNC_7(VAR_4);
 VAR_3->final_fn(VAR_4->buffer, &VAR_4->ctx);
 if (VAR_5)
  FUNC_6(VAR_5, VAR_4->buffer);
 if (VAR_6 & VAR_2)
  FUNC_3(VAR_4, VAR_4->buffer, VAR_3->rawsz);
 if (VAR_6 & VAR_1)
  FUNC_5(VAR_4->fd, VAR_4->name);
 if (VAR_6 & VAR_0) {
  if (FUNC_0(VAR_4->fd))
   FUNC_2("%s: sha1 file error on close", VAR_4->name);
  VAR_7 = 0;
 } else
  VAR_7 = VAR_4->fd;
 if (0 <= VAR_4->check_fd) {
  char VAR_8;
  int VAR_9 = FUNC_8(VAR_4->check_fd, &VAR_8, 1);
  if (VAR_9 < 0)
   FUNC_2("%s: error when reading the tail of sha1 file",
      VAR_4->name);
  if (VAR_9)
   FUNC_1("%s: sha1 file has trailing garbage", VAR_4->name);
  if (FUNC_0(VAR_4->check_fd))
   FUNC_2("%s: sha1 file error on close", VAR_4->name);
 }
 FUNC_4(VAR_4);
 return VAR_7;
}
