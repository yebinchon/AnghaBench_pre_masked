
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts_data {int header_size; scalar_t__ data_size; int query_flags; } ;
struct connection {int In; } ;


 struct hts_data* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_4 (struct connection *VAR_5, int VAR_6) {
  struct hts_data *VAR_7 = FUNC_0(VAR_5);

  if (VAR_4 > 0) {
    FUNC_3 (VAR_3, "http_server: op=%d, header_size=%d\n", VAR_6, VAR_7->header_size);
  }

  if (VAR_6 != 131) {
    VAR_1++;
    if (VAR_6 != 130) {
      VAR_2++;
    }
  }

  switch (VAR_6) {

    case 131:
      break;

    case 130:
    case 128:
    case 129:

    default:
      VAR_7->query_flags |= VAR_0;
      break;
  }

  FUNC_2 (FUNC_1 (&VAR_5->In, VAR_7->header_size) == VAR_7->header_size);
  return VAR_7->data_size >= 0 ? -413 : -501;

}
