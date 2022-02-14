
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {size_t avail_in; char* next_in; char* next_out; scalar_t__ avail_out; int * opaque; int * bzfree; int * bzalloc; } ;
typedef TYPE_1__ bz_stream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int const FUNC_2 (TYPE_1__*,int ,int ) ;





 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static off_t
FUNC_11(int VAR_2, int VAR_3, char *VAR_4, size_t VAR_5, off_t *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 off_t VAR_10 = 0;
 bz_stream VAR_11;
 static char *VAR_12, *VAR_13;

 if (VAR_12 == ((void*)0))
  VAR_12 = FUNC_5(VAR_0);
 if (VAR_13 == ((void*)0))
  VAR_13 = FUNC_5(VAR_0);
 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
         FUNC_6("malloc");

 VAR_11.bzalloc = ((void*)0);
 VAR_11.bzfree = ((void*)0);
 VAR_11.opaque = ((void*)0);

 VAR_8 = 0;
 VAR_7 = FUNC_2(&VAR_11, 0, 0);
 if (VAR_7 != 129)
         FUNC_7("bzip2 init");


 VAR_11.avail_in = VAR_5;
 VAR_11.next_in = VAR_4;

 if (VAR_6)
  *VAR_6 = VAR_5;

 while (VAR_7 == 129) {
  FUNC_3();
         if (VAR_11.avail_in == 0 && !VAR_8) {
   ssize_t VAR_14;

                 VAR_14 = FUNC_9(VAR_2, VAR_12, VAR_0);
                 if (VAR_14 < 0)
                         FUNC_6("read");
                 if (VAR_14 == 0)
                         VAR_8 = 1;
   FUNC_4(VAR_14);
                 VAR_11.next_in = VAR_12;
                 VAR_11.avail_in = VAR_14;
   if (VAR_6)
    *VAR_6 += VAR_14;
         }

         VAR_11.next_out = VAR_13;
         VAR_11.avail_out = VAR_0;
         VAR_7 = FUNC_0(&VAR_11);

         switch (VAR_7) {
         case 128:
         case 129:
                 if (VAR_7 == 129 && VAR_8) {





    if (VAR_9 == 1)
     VAR_7 = 128;
    else
     FUNC_7("truncated file");
   }
   VAR_9 = 0;
                 if (!VAR_1 && VAR_11.avail_out != VAR_0) {
    ssize_t VAR_15;

                         VAR_15 = FUNC_10(VAR_3, VAR_13, VAR_0 - VAR_11.avail_out);
                         if (VAR_15 < 0)
                                 FUNC_6("write");
                  VAR_10 += VAR_15;
                 }
   if (VAR_7 == 128 && !VAR_8) {
    if (FUNC_1(&VAR_11) != 129 ||
        FUNC_2(&VAR_11, 0, 0) != 129)
     FUNC_7("bzip2 re-init");
    VAR_9 = 1;
    VAR_7 = 129;
   }
   break;

         case 132:
                 FUNC_8("bzip2 data integrity error");
   break;

         case 131:
                 FUNC_8("bzip2 magic number error");
   break;

         case 130:
                 FUNC_8("bzip2 out of memory");
   break;

  default:
   FUNC_8("unknown bzip2 error: %d", VAR_7);
   break;
         }
 }

 if (VAR_7 != 128 || FUNC_1(&VAR_11) != 129)
         return (-1);

 return (VAR_10);
}
