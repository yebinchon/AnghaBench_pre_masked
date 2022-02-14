
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
struct tuple_list {scalar_t__ offs; int flags; struct tuple* tuples; struct tuple_list* next; } ;
struct tuple_info {unsigned char length; } ;
struct tuple {unsigned char code; unsigned char length; unsigned char* data; struct tuple* next; } ;
typedef scalar_t__ off_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*) ;
 struct tuple_info* FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (int,int ,int*) ;
 scalar_t__ FUNC_5 (int,scalar_t__,int ) ;
 int FUNC_6 (char*,...) ;
 unsigned char FUNC_7 (int,unsigned char*,unsigned char) ;
 struct tuple_list* VAR_6 ;
 char* FUNC_8 (unsigned char) ;
 void* FUNC_9 (unsigned char) ;

__attribute__((used)) static struct tuple_list *
FUNC_10(int VAR_7, int VAR_8, off_t VAR_9)
{
 struct tuple *VAR_10, *VAR_11 = 0;
 struct tuple_list *VAR_12;
 struct tuple_info *VAR_13;
 int VAR_14 = 0;
 unsigned char VAR_15, VAR_16;


 for (VAR_12 = VAR_6; VAR_12; VAR_12 = VAR_12->next)
  if (VAR_12->offs == VAR_9 && VAR_12->flags == (VAR_8 & VAR_3))
   return (0);
 VAR_12 = FUNC_9(sizeof(*VAR_12));
 VAR_12->offs = VAR_9;
 VAR_12->flags = VAR_8 & VAR_3;
 if (FUNC_4(VAR_7, VAR_4, &VAR_8) < 0)
  FUNC_1(1, "Setting flag to rad %s memory failed",
      VAR_8 ? "attribute" : "common");
 if (FUNC_5(VAR_7, VAR_9, VAR_5) < 0)
  FUNC_1(1, "Unable to seek to memory offset %ju",
      (uintmax_t)VAR_9);
 do {
  if (FUNC_7(VAR_7, &VAR_15, 1) != 1)
   FUNC_2(1, "CIS code read");
  VAR_14++;
  if (VAR_15 == VAR_1)
   continue;
  VAR_10 = FUNC_9(sizeof(*VAR_10));
  VAR_10->code = VAR_15;
  if (VAR_15 == VAR_0)
   VAR_16 = 0;
  else {
   if (FUNC_7(VAR_7, &VAR_16, 1) != 1)
    FUNC_2(1, "CIS len read");
   VAR_14++;
  }
  if (VAR_16 == 0xFF) {
   VAR_16 = 0;
   VAR_15 = VAR_0;
  }
  FUNC_0(VAR_16 < 0xff);





  VAR_13 = FUNC_3(VAR_15);
  if (VAR_13 == ((void*)0) || (VAR_13->length != VAR_2 && VAR_13->length > VAR_16)) {
   FUNC_6("code %s (%d) ignored\n", FUNC_8(VAR_15), VAR_15);
   continue;
  }
  VAR_10->length = VAR_16;
  if (VAR_16 != 0) {
   VAR_14 += VAR_16;
   VAR_10->data = FUNC_9(VAR_16);
   if (FUNC_7(VAR_7, VAR_10->data, VAR_16) != VAR_16)
    FUNC_2(1, "Can't read CIS data");
  }

  if (VAR_11 != ((void*)0))
   VAR_11->next = VAR_10;
  if (VAR_12->tuples == ((void*)0)) {
   VAR_12->tuples = VAR_10;
   VAR_10->next = ((void*)0);
  }
  VAR_11 = VAR_10;
 } while (VAR_15 != VAR_0 && VAR_14 < 1024);
 return (VAR_12);
}
