
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct http_parser_url {int field_set; TYPE_1__* field_data; int member_0; } ;
struct TYPE_13__ {void* password; void* username; void* query; void* path; void* port; void* host; void* scheme; } ;
typedef TYPE_2__ git_net_url ;
struct TYPE_14__ {int ptr; int size; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_12__ {int off; size_t len; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,char const*,size_t) ;
 void* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char const*,size_t) ;
 int FUNC_7 (TYPE_3__*,char const*) ;
 int FUNC_8 (int ,char*,char const*) ;
 scalar_t__ FUNC_9 (char const*,int ,int,struct http_parser_url*) ;
 char* FUNC_10 (char const*,char,size_t) ;
 int FUNC_11 (char const*) ;

int FUNC_12(git_net_url *VAR_9, const char *VAR_10)
{
 struct http_parser_url VAR_11 = {0};
 bool VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 git_buf VAR_18 = VAR_0,
  VAR_19 = VAR_0,
  VAR_20 = VAR_0,
  VAR_21 = VAR_0,
  VAR_22 = VAR_0,
  VAR_23 = VAR_0,
  VAR_24 = VAR_0;
 int VAR_25 = VAR_1;

 if (FUNC_9(VAR_10, FUNC_11(VAR_10), 0, &VAR_11)) {
  FUNC_8(VAR_2, "malformed URL '%s'", VAR_10);
  goto done;
 }

 VAR_12 = !!(VAR_11.field_set & (1 << VAR_7));
 VAR_13 = !!(VAR_11.field_set & (1 << VAR_3));
 VAR_14 = !!(VAR_11.field_set & (1 << VAR_5));
 VAR_15 = !!(VAR_11.field_set & (1 << VAR_4));
 VAR_16 = !!(VAR_11.field_set & (1 << VAR_6));
 VAR_17 = !!(VAR_11.field_set & (1 << VAR_8));

 if (VAR_12) {
  const char *VAR_26 = VAR_10 + VAR_11.field_data[VAR_7].off;
  size_t VAR_27 = VAR_11.field_data[VAR_7].len;
  FUNC_6(&VAR_18, VAR_26, VAR_27);
  FUNC_1(VAR_18.ptr, VAR_18.size);
 } else {
  FUNC_8(VAR_2, "malformed URL '%s'", VAR_10);
  goto done;
 }

 if (VAR_13) {
  const char *VAR_28 = VAR_10 + VAR_11.field_data[VAR_3].off;
  size_t VAR_29 = VAR_11.field_data[VAR_3].len;
  FUNC_2(&VAR_19, VAR_28, VAR_29);
 }

 if (VAR_14) {
  const char *VAR_30 = VAR_10 + VAR_11.field_data[VAR_5].off;
  size_t VAR_31 = VAR_11.field_data[VAR_5].len;
  FUNC_6(&VAR_20, VAR_30, VAR_31);
 } else {
  const char *VAR_32 = FUNC_0(VAR_18.ptr);

  if (VAR_32 == ((void*)0)) {
   FUNC_8(VAR_2, "unknown scheme for URL '%s'", VAR_10);
   goto done;
  }

  FUNC_7(&VAR_20, VAR_32);
 }

 if (VAR_15) {
  const char *VAR_33 = VAR_10 + VAR_11.field_data[VAR_4].off;
  size_t VAR_34 = VAR_11.field_data[VAR_4].len;
  FUNC_6(&VAR_21, VAR_33, VAR_34);
 } else {
  FUNC_7(&VAR_21, "/");
 }

 if (VAR_16) {
  const char *VAR_35 = VAR_10 + VAR_11.field_data[VAR_6].off;
  size_t VAR_36 = VAR_11.field_data[VAR_6].len;
  FUNC_2(&VAR_24, VAR_35, VAR_36);
 }

 if (VAR_17) {
  const char *VAR_37 = VAR_10 + VAR_11.field_data[VAR_8].off;
  size_t VAR_38 = VAR_11.field_data[VAR_8].len;
  const char *VAR_39 = FUNC_10(VAR_37, ':', VAR_38);

  if (VAR_39) {
   const char *VAR_40 = VAR_37;
   size_t VAR_41 = VAR_39 - VAR_37;
   const char *VAR_42 = VAR_39 + 1;
   size_t VAR_43 = VAR_38 - (VAR_41 + 1);

   FUNC_2(&VAR_22, VAR_40, VAR_41);
   FUNC_2(&VAR_23, VAR_42, VAR_43);
  } else {
   FUNC_2(&VAR_22, VAR_37, VAR_38);
  }
 }

 if (FUNC_5(&VAR_18) ||
     FUNC_5(&VAR_19) ||
     FUNC_5(&VAR_20) ||
     FUNC_5(&VAR_21) ||
     FUNC_5(&VAR_24) ||
     FUNC_5(&VAR_22) ||
     FUNC_5(&VAR_23))
  return -1;

 VAR_9->scheme = FUNC_3(&VAR_18);
 VAR_9->host = FUNC_3(&VAR_19);
 VAR_9->port = FUNC_3(&VAR_20);
 VAR_9->path = FUNC_3(&VAR_21);
 VAR_9->query = FUNC_3(&VAR_24);
 VAR_9->username = FUNC_3(&VAR_22);
 VAR_9->password = FUNC_3(&VAR_23);

 VAR_25 = 0;

done:
 FUNC_4(&VAR_18);
 FUNC_4(&VAR_19);
 FUNC_4(&VAR_20);
 FUNC_4(&VAR_21);
 FUNC_4(&VAR_24);
 FUNC_4(&VAR_22);
 FUNC_4(&VAR_23);
 return VAR_25;
}
