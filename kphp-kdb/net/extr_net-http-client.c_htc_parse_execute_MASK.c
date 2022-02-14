
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_data {int response_code; int data_size; int wlen; char* word; int response_words; int response_flags; scalar_t__ location_offset; scalar_t__ header_size; int location_size; scalar_t__ first_line_size; int http_ver; } ;
struct connection {scalar_t__ status; int parse_state; int In; int Q; } ;
struct TYPE_2__ {int (* execute ) (struct connection*,int) ;} ;


 struct htc_data* FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,long long) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct connection*,int) ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct htc_data*,int ,int) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_18 ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char**,int) ;
 int FUNC_13 (struct connection*,int) ;

int FUNC_14 (struct connection *VAR_19) {
  struct htc_data *VAR_20 = FUNC_0(VAR_19);
  char *VAR_21, *VAR_22, *VAR_23;
  int VAR_24;
  long long VAR_25;

  while (VAR_19->status == VAR_13 || VAR_19->status == VAR_10) {
    VAR_24 = FUNC_9 (&VAR_19->Q);
    VAR_21 = VAR_22 = FUNC_8 (&VAR_19->Q);
    VAR_23 = VAR_21 + VAR_24;
    if (VAR_24 <= 0) {
      break;
    }

    while (VAR_21 < VAR_23 && VAR_19->parse_state != 140) {

      switch (VAR_19->parse_state) {
      case 130:

 FUNC_6 (VAR_20, 0, sizeof (*VAR_20));
 VAR_20->response_code = VAR_16;
 VAR_20->data_size = -1;
 VAR_19->parse_state = 134;

      case 134:

 while (VAR_21 < VAR_23 && ((unsigned) *VAR_21 > ' ')) {
   if (VAR_20->wlen < 15) {
     VAR_20->word[VAR_20->wlen] = *VAR_21;
   }
   VAR_20->wlen++;
   VAR_21++;
 }
 if (VAR_20->wlen > 4096) {
   VAR_19->parse_state = 138;
   break;
 }
 if (VAR_21 == VAR_23) {
   break;
 }
 VAR_19->parse_state = 133;
 VAR_20->response_words++;
 if (VAR_20->response_words == 1) {
   if (!FUNC_5 (VAR_20->word, "HTTP/1.0", 8)) {
     VAR_20->http_ver = VAR_0;
     VAR_20->response_flags &= ~VAR_7;
   } else if (!FUNC_5 (VAR_20->word, "HTTP/1.1", 8)) {
     VAR_20->http_ver = VAR_1;
     VAR_20->response_flags |= VAR_7;
   } else {
     VAR_19->parse_state = 131;
     VAR_20->response_flags |= VAR_6;
   }
 } else if (VAR_20->response_words == 2) {
   VAR_20->response_code = VAR_15;
   if (VAR_20->wlen == 3) {
     VAR_20->word[3] = 0;
     char *VAR_26;
     VAR_20->response_code = FUNC_12 (VAR_20->word, &VAR_26, 10);
     if (VAR_26 != VAR_20->word + 3 || VAR_20->response_code < 100 || VAR_20->response_code > 599) {
       VAR_20->response_code = VAR_15;
     }
   }
   if (VAR_20->response_code == VAR_15) {
     VAR_20->response_flags |= VAR_6;
   }
   VAR_19->parse_state = 131;
 } else {
   FUNC_3 (VAR_20->response_flags & (VAR_8 | VAR_4));
   if (VAR_20->wlen) {
     if (VAR_20->response_flags & VAR_8) {
       VAR_20->location_offset = VAR_20->header_size;
       VAR_20->location_size = VAR_20->wlen;
     } else {
       if (VAR_20->wlen == 10 && !FUNC_11 (VAR_20->word, "keep-alive", 10)) {
  VAR_20->response_flags |= VAR_7;
       } else if (VAR_20->wlen == 5 && !FUNC_11 (VAR_20->word, "close", 5)) {
  VAR_20->response_flags &= ~VAR_7;
       }
     }
   }
   VAR_20->response_flags &= ~(VAR_8 | VAR_4);
   VAR_19->parse_state = 132;
 }
 VAR_20->header_size += VAR_20->wlen;
 break;

      case 133:
      case 132:

 while (VAR_20->header_size < VAR_2 && VAR_21 < VAR_23 && (*VAR_21 == ' ' || (*VAR_21 == '\t' && VAR_20->response_words >= 8))) {
   VAR_20->header_size++;
   VAR_21++;
 }
 if (VAR_20->header_size >= VAR_2) {
   VAR_19->parse_state = 138;
   break;
 }
 if (VAR_21 == VAR_23) {
   break;
 }
 if (VAR_19->parse_state == 132) {
   VAR_19->parse_state = 139;
   break;
 }
 if (VAR_20->response_words < 2) {
   VAR_20->wlen = 0;
   VAR_19->parse_state = 134;
 } else {
   FUNC_3 (VAR_20->response_words >= 3);
   if (VAR_20->response_flags & VAR_5) {
     if (VAR_20->data_size != -1) {
       VAR_19->parse_state = 131;
       VAR_20->response_flags |= VAR_6;
     } else {
       VAR_19->parse_state = 136;
       VAR_20->data_size = 0;
     }
   } else if (VAR_20->response_flags & (VAR_8 | VAR_4)) {
     VAR_20->wlen = 0;
     VAR_19->parse_state = 134;
   } else {
     VAR_19->parse_state = 131;
   }
 }
 break;
      case 135:

 while (VAR_21 < VAR_23 && *VAR_21 != ':' && *VAR_21 > ' ') {
   if (VAR_20->wlen < 15) {
     VAR_20->word[VAR_20->wlen] = *VAR_21;
   }
   VAR_20->wlen++;
   VAR_21++;
 }
 if (VAR_20->wlen > 4096) {
   VAR_19->parse_state = 138;
   break;
 }
 if (VAR_21 == VAR_23) {
   break;
 }

 if (*VAR_21 != ':') {
   VAR_20->header_size += VAR_20->wlen;
   VAR_19->parse_state = 131;
   VAR_20->response_flags |= VAR_6;
   break;
 }

 VAR_21++;

 if (VAR_20->wlen == 8 && !FUNC_11 (VAR_20->word, "location", 8)) {
   VAR_20->response_flags |= VAR_8;
 } else if (VAR_20->wlen == 10 && !FUNC_11 (VAR_20->word, "connection", 10)) {
   VAR_20->response_flags |= VAR_4;
 } else if (VAR_20->wlen == 14 && !FUNC_11 (VAR_20->word, "content-length", 14)) {
   VAR_20->response_flags |= VAR_5;
 } else {
   VAR_20->response_flags &= ~(VAR_8 | VAR_5 | VAR_4);
 }

 VAR_20->header_size += VAR_20->wlen + 1;
 VAR_19->parse_state = 133;
 break;

      case 136:


 VAR_25 = VAR_20->data_size;
 while (VAR_21 < VAR_23 && *VAR_21 >= '0' && *VAR_21 <= '9') {
   if (VAR_25 >= 0x7fffffffL / 10) {
     VAR_20->response_flags |= VAR_6;
     VAR_19->parse_state = 131;
     break;
   }
   VAR_25 = VAR_25*10 + (*VAR_21 - '0');
   VAR_21++;
   VAR_20->header_size++;
   VAR_20->response_flags &= ~VAR_5;
 }

 VAR_20->data_size = VAR_25;
 if (VAR_21 == VAR_23) {
   break;
 }

 if (VAR_20->response_flags & VAR_5) {
   VAR_20->response_flags |= VAR_6;
   VAR_19->parse_state = 131;
 } else {
   VAR_19->parse_state = 132;
 }
 break;

      case 131:


 while (VAR_20->header_size < VAR_2 && VAR_21 < VAR_23 && (*VAR_21 != '\r' && *VAR_21 != '\n')) {
   VAR_20->header_size++;
   VAR_21++;
 }
 if (VAR_20->header_size >= VAR_2) {
   VAR_19->parse_state = 138;
   break;
 }
 if (VAR_21 == VAR_23) {
   break;
 }

 VAR_19->parse_state = 139;

      case 139:

 if (VAR_21 == VAR_23) {
   break;
 }
 if (*VAR_21 == '\r') {
   VAR_21++;
   VAR_20->header_size++;
 }
 VAR_19->parse_state = 128;

      case 128:


 if (VAR_21 == VAR_23) {
   break;
 }
 if (++VAR_20->response_words < 8) {
   VAR_20->response_words = 8;
   if (VAR_20->response_flags & VAR_6) {
     VAR_19->parse_state = 138;
     break;
   }
 }

 if (*VAR_21 != '\n') {
   VAR_20->response_flags |= VAR_6;
   VAR_19->parse_state = 131;
   break;
 }

 VAR_21++;
 VAR_20->header_size++;

 VAR_19->parse_state = 137;

      case 137:


 if (VAR_21 == VAR_23) {
   break;
 }

 if (!VAR_20->first_line_size) {
   VAR_20->first_line_size = VAR_20->header_size;
 }

 if (*VAR_21 == '\r') {
   VAR_21++;
   VAR_20->header_size++;
   VAR_19->parse_state = 129;
   break;
 }
 if (*VAR_21 == '\n') {
   VAR_19->parse_state = 129;
   break;
 }

 if (VAR_20->response_flags & VAR_6) {
   VAR_19->parse_state = 131;
 } else {
   VAR_20->wlen = 0;
   VAR_19->parse_state = 135;
 }
 break;

      case 129:


 if (VAR_21 == VAR_23) {
   break;
 }
 if (*VAR_21 != '\n') {
   VAR_19->parse_state = 138;
   break;
 }
 VAR_21++;
 VAR_20->header_size++;

 if (!VAR_20->first_line_size) {
   VAR_20->first_line_size = VAR_20->header_size;
 }

 VAR_19->parse_state = 140;

      case 140:

 break;

      case 138:

 VAR_20->response_flags |= VAR_6;
 VAR_19->parse_state = 140;
 break;

      default:
 FUNC_3 (0);
      }
    }

    VAR_24 = VAR_21 - VAR_22;
    FUNC_7 (&VAR_19->Q, VAR_24);

    if (VAR_19->parse_state == 140) {
      if (VAR_20->header_size >= VAR_2) {
        VAR_20->response_flags |= VAR_6;
      }

      if (VAR_20->response_flags & VAR_6) {
 VAR_20->response_code = -1;
        VAR_17++;
      }

      VAR_19->status = VAR_11;
      if (!FUNC_1(VAR_19)->execute) {
 FUNC_1(VAR_19)->execute = FUNC_4;
      }
      int VAR_27 = FUNC_1(VAR_19)->execute (VAR_19, VAR_20->response_code);
      VAR_18++;
      if (VAR_27 > 0) {
 VAR_19->status = VAR_10;
 return VAR_27;
      } else if (VAR_27 < 0) {
 if (VAR_27 == VAR_9) {
   FUNC_3 (FUNC_2 (&VAR_19->In, VAR_20->header_size) == VAR_20->header_size);
   if (VAR_20->data_size > 0) {
     VAR_24 = FUNC_2 (&VAR_19->In, VAR_20->data_size);
     if (VAR_24 < VAR_20->data_size) {
       VAR_19->parse_state = 130;
       if (VAR_19->status == VAR_11) {
  VAR_19->status = VAR_13;
       }
       return VAR_24 - VAR_20->data_size;
     }
   }
 } else {
   VAR_20->response_flags &= ~VAR_6;
 }
      }
      if (VAR_19->status == VAR_11) {
 VAR_19->status = VAR_13;
      }

      if (VAR_20->response_flags & VAR_6) {
        FUNC_3 (VAR_19->status == VAR_13);
        VAR_20->response_flags &= ~VAR_7;
      }
      if (VAR_19->status == VAR_13 && !(VAR_20->response_flags & VAR_7)) {
        VAR_19->status = VAR_14;
        VAR_19->parse_state = -1;
        return 0;
      }
      if (VAR_19->status != VAR_12) {
        VAR_19->parse_state = 130;
      }
      FUNC_10 (&VAR_19->Q, &VAR_19->In);
    }
  }
  if (VAR_19->status == VAR_10 || VAR_19->status == VAR_12) {
    return VAR_3;
  }
  return 0;
}
