
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int * buf; } ;
struct TYPE_4__ {int buf; } ;
struct TYPE_6__ {scalar_t__ type; int prop_length; int text_length; scalar_t__ action; TYPE_2__ dst; int text_delta; int prop_delta; TYPE_1__ src; scalar_t__ srcRev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,char const*,int,int *) ;
 int FUNC_3 (scalar_t__,int ,int *) ;
 int FUNC_4 (scalar_t__,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,char const*) ;
 char* FUNC_7 (int *,scalar_t__*) ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
 const uint32_t VAR_8 = VAR_7.type;
 const int VAR_9 = VAR_7.prop_length != -1;
 const int VAR_10 = VAR_7.text_length != -1;






 static const char *const VAR_11 = "::empty::";
 const char *VAR_12 = ((void*)0);
 uint32_t VAR_13 = VAR_5 | 0644;

 if (VAR_7.action == VAR_2) {
  if (VAR_10 || VAR_9 || VAR_7.srcRev)
   FUNC_1("invalid dump: deletion node has "
    "copyfrom info, text, or properties");
  FUNC_5(VAR_7.dst.buf);
  return;
 }
 if (VAR_7.action == VAR_3) {
  FUNC_5(VAR_7.dst.buf);
  VAR_7.action = VAR_0;
 }
 if (VAR_7.srcRev) {
  FUNC_3(VAR_7.srcRev, VAR_7.src.buf, VAR_7.dst.buf);
  if (VAR_7.action == VAR_0)
   VAR_7.action = VAR_1;
 }
 if (VAR_10 && VAR_8 == VAR_4)
  FUNC_1("invalid dump: directories cannot have text attached");




 if (VAR_7.action == VAR_1 && !*VAR_7.dst.buf) {
  if (VAR_8 != VAR_4)
   FUNC_1("invalid dump: root of tree is not a regular file");
  VAR_12 = ((void*)0);
 } else if (VAR_7.action == VAR_1) {
  uint32_t VAR_14;
  VAR_12 = FUNC_7(VAR_7.dst.buf, &VAR_14);
  if (VAR_14 == VAR_4 && VAR_8 != VAR_4)
   FUNC_1("invalid dump: cannot modify a directory into a file");
  if (VAR_14 != VAR_4 && VAR_8 == VAR_4)
   FUNC_1("invalid dump: cannot modify a file into a directory");
  VAR_7.type = VAR_14;
  VAR_13 = VAR_14;
 } else if (VAR_7.action == VAR_0) {
  if (VAR_8 == VAR_4)
   VAR_12 = ((void*)0);
  else if (VAR_10)
   VAR_12 = VAR_11;
  else
   FUNC_1("invalid dump: adds node without text");
 } else {
  FUNC_1("invalid dump: Node-path block lacks Node-action");
 }




 if (VAR_9) {
  if (!VAR_7.prop_delta)
   VAR_7.type = VAR_8;
  if (VAR_7.prop_length)
   FUNC_8();
 }




 if (VAR_8 == VAR_4)
  return;
 FUNC_0(VAR_12);
 if (VAR_12 == VAR_11)

  VAR_12 = ((void*)0);
 if (!VAR_10) {
  FUNC_6(VAR_7.dst.buf, VAR_7.type, VAR_12);
  return;
 }
 if (!VAR_7.text_delta) {
  FUNC_6(VAR_7.dst.buf, VAR_7.type, "inline");
  FUNC_4(VAR_7.type, VAR_7.text_length, &VAR_6);
  return;
 }
 FUNC_6(VAR_7.dst.buf, VAR_7.type, "inline");
 FUNC_2(VAR_7.type, VAR_13, VAR_12,
    VAR_7.text_length, &VAR_6);
}
