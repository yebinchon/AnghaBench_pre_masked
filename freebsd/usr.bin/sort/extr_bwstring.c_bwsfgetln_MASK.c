
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef scalar_t__ wchar_t ;
struct reader_buffer {int fgetwln_z_buffer_size; int* fgetwln_z_buffer; } ;
struct bwstring {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char) ;
 struct bwstring* FUNC_2 (unsigned char*,size_t) ;
 struct bwstring* FUNC_3 (scalar_t__*,size_t) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,size_t*) ;
 int FUNC_8 (int *) ;
 scalar_t__* FUNC_9 (int *,size_t*) ;
 void* FUNC_10 (int*,int) ;

struct bwstring *
FUNC_11(FILE *VAR_3, size_t *VAR_4, bool VAR_5, struct reader_buffer *VAR_6)
{
 wint_t VAR_7;

 VAR_7 = VAR_5 ? FUNC_1('\0') : FUNC_1('\n');

 if (!VAR_5 && (VAR_1 > 1)) {
  wchar_t *VAR_8;

  VAR_8 = FUNC_9(VAR_3, VAR_4);

  if (VAR_8 == ((void*)0)) {
   if (!FUNC_5(VAR_3))
    FUNC_4(2, ((void*)0));
   return (((void*)0));
  }
  if (*VAR_4 > 0) {
   if (VAR_8[*VAR_4 - 1] == (wchar_t)VAR_7)
    --(*VAR_4);
  }
  return (FUNC_3(VAR_8, *VAR_4));

 } else if (!VAR_5 && (VAR_1 == 1)) {
  char *VAR_9;

  VAR_9 = FUNC_7(VAR_3, VAR_4);

  if (VAR_9 == ((void*)0)) {
   if (!FUNC_5(VAR_3))
    FUNC_4(2, ((void*)0));
   return (((void*)0));
  }
  if (*VAR_4 > 0) {
   if (VAR_9[*VAR_4 - 1] == '\n')
    --(*VAR_4);
  }
  return (FUNC_2((unsigned char*)VAR_9, *VAR_4));

 } else {
  *VAR_4 = 0;

  if (FUNC_5(VAR_3))
   return (((void*)0));

  if (2 >= VAR_6->fgetwln_z_buffer_size) {
   VAR_6->fgetwln_z_buffer_size += 256;
   VAR_6->fgetwln_z_buffer = FUNC_10(VAR_6->fgetwln_z_buffer,
       sizeof(wchar_t) * VAR_6->fgetwln_z_buffer_size);
  }
  VAR_6->fgetwln_z_buffer[*VAR_4] = 0;

  if (VAR_1 == 1)
   while (!FUNC_5(VAR_3)) {
    int VAR_10;

    VAR_10 = FUNC_6(VAR_3);

    if (VAR_10 == VAR_0) {
     if (*VAR_4 == 0)
      return (((void*)0));
     goto line_read_done;
    }
    if (VAR_10 == VAR_7)
     goto line_read_done;

    if (*VAR_4 + 1 >= VAR_6->fgetwln_z_buffer_size) {
     VAR_6->fgetwln_z_buffer_size += 256;
     VAR_6->fgetwln_z_buffer = FUNC_10(VAR_6->fgetwln_z_buffer,
         FUNC_0(VAR_6->fgetwln_z_buffer_size));
    }

    VAR_6->fgetwln_z_buffer[*VAR_4] = VAR_10;
    VAR_6->fgetwln_z_buffer[++(*VAR_4)] = 0;
   }
  else
   while (!FUNC_5(VAR_3)) {
    wint_t VAR_11 = 0;

    VAR_11 = FUNC_8(VAR_3);

    if (VAR_11 == VAR_2) {
     if (*VAR_4 == 0)
      return (((void*)0));
     goto line_read_done;
    }
    if (VAR_11 == VAR_7)
     goto line_read_done;

    if (*VAR_4 + 1 >= VAR_6->fgetwln_z_buffer_size) {
     VAR_6->fgetwln_z_buffer_size += 256;
     VAR_6->fgetwln_z_buffer = FUNC_10(VAR_6->fgetwln_z_buffer,
         FUNC_0(VAR_6->fgetwln_z_buffer_size));
    }

    VAR_6->fgetwln_z_buffer[*VAR_4] = VAR_11;
    VAR_6->fgetwln_z_buffer[++(*VAR_4)] = 0;
   }

line_read_done:

  return (FUNC_3(VAR_6->fgetwln_z_buffer, *VAR_4));
 }
}
