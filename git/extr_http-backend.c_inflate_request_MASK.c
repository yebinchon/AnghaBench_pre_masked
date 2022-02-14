
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int stream ;
typedef size_t ssize_t ;
typedef int out_buf ;
typedef int in_buf ;
struct TYPE_6__ {unsigned char* next_in; size_t avail_in; unsigned char* next_out; int avail_out; unsigned long total_out; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 size_t FUNC_7 (int ,unsigned char**,size_t) ;
 int FUNC_8 (int,unsigned char*,unsigned long,char const*) ;
 size_t FUNC_9 (int ,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_10(const char *VAR_3, int VAR_4, int VAR_5, ssize_t VAR_6)
{
 git_zstream VAR_7;
 unsigned char *VAR_8 = ((void*)0);
 unsigned char VAR_9[8192];
 unsigned char VAR_10[8192];
 unsigned long VAR_11 = 0;
 int VAR_12 = VAR_6 >= 0;
 size_t VAR_13 = VAR_6;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 FUNC_5(&VAR_7);

 while (1) {
  ssize_t VAR_14;

  if (VAR_5) {
   if (VAR_8)
    VAR_14 = 0;
   else
    VAR_14 = FUNC_7(0, &VAR_8, VAR_6);
   VAR_7.next_in = VAR_8;
  } else {
   ssize_t VAR_15;
   if (VAR_12 && VAR_13 <= sizeof(VAR_9))
    VAR_15 = VAR_13;
   else
    VAR_15 = sizeof(VAR_9);
   VAR_14 = FUNC_9(0, VAR_9, VAR_15);
   VAR_7.next_in = VAR_9;
   if (VAR_12 && VAR_14 > 0)
    VAR_13 -= VAR_14;
  }

  if (VAR_14 <= 0)
   FUNC_1("request ended in the middle of the gzip stream");
  VAR_7.avail_in = VAR_14;

  while (0 < VAR_7.avail_in) {
   int VAR_16;

   VAR_7.next_out = VAR_10;
   VAR_7.avail_out = sizeof(VAR_10);

   VAR_16 = FUNC_3(&VAR_7, VAR_0);
   if (VAR_16 != VAR_1 && VAR_16 != VAR_2)
    FUNC_1("zlib error inflating request, result %d", VAR_16);

   VAR_14 = VAR_7.total_out - VAR_11;
   FUNC_8(VAR_4, VAR_10, VAR_7.total_out - VAR_11, VAR_3);
   VAR_11 = VAR_7.total_out;

   if (VAR_16 == VAR_2)
    goto done;
  }
 }

done:
 FUNC_4(&VAR_7);
 FUNC_0(VAR_4);
 FUNC_2(VAR_8);
}
