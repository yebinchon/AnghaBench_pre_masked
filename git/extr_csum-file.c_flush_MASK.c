
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashfile {scalar_t__ check_fd; int total; int name; int tp; int fd; } ;
typedef unsigned int ssize_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (void const*,unsigned char*,unsigned int) ;
 unsigned int FUNC_4 (scalar_t__,unsigned char*,unsigned int) ;
 int FUNC_5 (int ,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct hashfile *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
 if (0 <= VAR_0->check_fd && VAR_2) {
  unsigned char VAR_3[8192];
  ssize_t VAR_4 = FUNC_4(VAR_0->check_fd, VAR_3, VAR_2);

  if (VAR_4 < 0)
   FUNC_1("%s: sha1 file read error", VAR_0->name);
  if (VAR_4 != VAR_2)
   FUNC_0("%s: sha1 file truncated", VAR_0->name);
  if (FUNC_3(VAR_1, VAR_3, VAR_2))
   FUNC_0("sha1 file '%s' validation error", VAR_0->name);
 }

 for (;;) {
  int VAR_5 = FUNC_5(VAR_0->fd, VAR_1, VAR_2);
  if (VAR_5 > 0) {
   VAR_0->total += VAR_5;
   FUNC_2(VAR_0->tp, VAR_0->total);
   VAR_1 = (char *) VAR_1 + VAR_5;
   VAR_2 -= VAR_5;
   if (VAR_2)
    continue;
   return;
  }
  if (!VAR_5)
   FUNC_0("sha1 file '%s' write error. Out of diskspace", VAR_0->name);
  FUNC_1("sha1 file '%s' write error", VAR_0->name);
 }
}
