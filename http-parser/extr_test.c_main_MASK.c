
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {char* name; char* raw; int http_major; int status_code; char* response_status; int num_headers; int body_size; int num_chunks_complete; int* chunk_lengths; int should_keep_alive; int headers; int http_minor; int message_complete_on_eof; int type; } ;
typedef int http_parser ;


 unsigned int FUNC_0 (struct message*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 char* FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 struct message* VAR_28 ;
 struct message* VAR_29 ;
 int FUNC_6 (char*,char*,char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct message*) ;
 int FUNC_17 (struct message*) ;
 int FUNC_18 (struct message*) ;
 int FUNC_19 (struct message*) ;
 int FUNC_20 () ;
 int FUNC_21 (struct message*,struct message*,struct message*) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (struct message*,struct message*,struct message*) ;
 int FUNC_27 (char const*,int ) ;
 int FUNC_28 (char*,int ,int ) ;
 int FUNC_29 () ;

int
FUNC_30 (void)
{
  unsigned VAR_30, VAR_31, VAR_32;
  unsigned long VAR_33;
  unsigned VAR_34;
  unsigned VAR_35;
  unsigned VAR_36;

  VAR_33 = FUNC_3();
  VAR_34 = (VAR_33 >> 16) & 255;
  VAR_35 = (VAR_33 >> 8) & 255;
  VAR_36 = VAR_33 & 255;
  FUNC_4("http_parser v%u.%u.%u (0x%06lx)\n", VAR_34, VAR_35, VAR_36, VAR_33);

  FUNC_4("sizeof(http_parser) = %u\n", (unsigned int)sizeof(http_parser));


  FUNC_25();
  FUNC_24();
  FUNC_20();
  FUNC_29();


  FUNC_12();


  FUNC_23();

  FUNC_13(VAR_14);
  FUNC_22(VAR_14, 1000);
  FUNC_22(VAR_14, 100000);

  FUNC_13(VAR_15);
  FUNC_22(VAR_15, 1000);
  FUNC_22(VAR_15, 100000);

  FUNC_10();
  FUNC_7();


  FUNC_9(VAR_14);
  FUNC_8(VAR_14);
  FUNC_11(VAR_14);
  FUNC_15(VAR_14);
  FUNC_14(VAR_14);
  FUNC_9(VAR_15);
  FUNC_8(VAR_15);
  FUNC_11(VAR_15);
  FUNC_15(VAR_15);
  FUNC_14(VAR_15);

  FUNC_28(
      "POST / HTTP/1.1\r\n"
      "Content-Length:\r\n"
      "\r\n",
      VAR_9,
      VAR_14);

  FUNC_28(
      "POST / HTTP/1.1\r\n"
      "Content-Length:  42 \r\n"
      "\r\n",
      VAR_13,
      VAR_14);

  FUNC_28(
      "POST / HTTP/1.1\r\n"
      "Content-Length: 4 2\r\n"
      "\r\n",
      VAR_9,
      VAR_14);

  FUNC_28(
      "POST / HTTP/1.1\r\n"
      "Content-Length: 13 37\r\n"
      "\r\n",
      VAR_9,
      VAR_14);

  FUNC_28(
      "POST / HTTP/1.1\r\n"
      "Content-Length:  42\r\n"
      " Hello world!\r\n",
      VAR_9,
      VAR_14);

  FUNC_28(
      "POST / HTTP/1.1\r\n"
      "Content-Length:  42\r\n"
      " \r\n",
      VAR_13,
      VAR_14);



  FUNC_28("HTP/1.1 200 OK\r\n\r\n", VAR_12, VAR_15);
  FUNC_28("HTTP/01.1 200 OK\r\n\r\n", VAR_12, VAR_15);
  FUNC_28("HTTP/11.1 200 OK\r\n\r\n", VAR_12, VAR_15);
  FUNC_28("HTTP/1.01 200 OK\r\n\r\n", VAR_12, VAR_15);
  FUNC_28("HTTP/1.1\t200 OK\r\n\r\n", VAR_12, VAR_15);
  FUNC_28("\rHTTP/1.1\t200 OK\r\n\r\n", VAR_12, VAR_15);

  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_29); VAR_30++) {
    FUNC_16(&VAR_29[VAR_30]);
  }

  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_29); VAR_30++) {
    FUNC_19(&VAR_29[VAR_30]);
  }

  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_29); VAR_30++) {
    FUNC_17(&VAR_29[VAR_30]);
  }

  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_29); VAR_30++) {
    if (!VAR_29[VAR_30].should_keep_alive) continue;
    for (VAR_31 = 0; VAR_31 < FUNC_0(VAR_29); VAR_31++) {
      if (!VAR_29[VAR_31].should_keep_alive) continue;
      for (VAR_32 = 0; VAR_32 < FUNC_0(VAR_29); VAR_32++) {
        FUNC_21(&VAR_29[VAR_30], &VAR_29[VAR_31], &VAR_29[VAR_32]);
      }
    }
  }

  FUNC_18(&VAR_29[VAR_19]);
  FUNC_18(&VAR_29[VAR_25]);


  {
    char * VAR_37 = FUNC_1(31337,
      "HTTP/1.0 200 OK\r\n"
      "Transfer-Encoding: chunked\r\n"
      "Content-Type: text/plain\r\n"
      "\r\n");
    struct message VAR_38 =
      {.name= "large chunked"
      ,.type= VAR_15
      ,.raw= VAR_37
      ,.should_keep_alive= VAR_4
      ,.message_complete_on_eof= VAR_4
      ,.http_major= 1
      ,.http_minor= 0
      ,.status_code= 200
      ,.response_status= "OK"
      ,.num_headers= 2
      ,.headers=
        { { "Transfer-Encoding", "chunked" }
        , { "Content-Type", "text/plain" }
        }
      ,.body_size= 31337*1024
      ,.num_chunks_complete= 31338
      };
    for (VAR_30 = 0; VAR_30 < VAR_16; VAR_30++) {
      VAR_38.chunk_lengths[VAR_30] = 1024;
    }
    FUNC_18(&VAR_38);
    FUNC_2(VAR_37);
  }



  FUNC_4("response scan 1/2      ");
  FUNC_26( &VAR_29[VAR_25]
           , &VAR_29[VAR_17]
           , &VAR_29[VAR_20]
           );

  FUNC_4("response scan 2/2      ");
  FUNC_26( &VAR_29[VAR_0]
           , &VAR_29[VAR_27]
           , &VAR_29[VAR_18]
           );

  FUNC_5("responses okay");




  FUNC_27("GET / IHTTP/1.0\r\n\r\n", VAR_8);
  FUNC_27("GET / ICE/1.0\r\n\r\n", VAR_8);
  FUNC_27("GET / HTP/1.1\r\n\r\n", VAR_12);
  FUNC_27("GET / HTTP/01.1\r\n\r\n", VAR_12);
  FUNC_27("GET / HTTP/11.1\r\n\r\n", VAR_12);
  FUNC_27("GET / HTTP/1.01\r\n\r\n", VAR_12);

  FUNC_27("GET / HTTP/1.0\r\nHello: w\1rld\r\n\r\n", VAR_10);
  FUNC_27("GET / HTTP/1.0\r\nHello: woooo\2rld\r\n\r\n", VAR_10);


  FUNC_27("GET / HTTP/1.1\r\n"
              "Test: Düsseldorf\r\n",
              VAR_13);


  FUNC_27("GET / HTTP/1.1\r\n"
              "Content-Type: text/plain\r\n"
              "Content-Length: 6\r\n"
              "\r\n"
              "fooba",
              VAR_13);

  static const char *VAR_39[] = {
    "DELETE",
    "GET",
    "HEAD",
    "POST",
    "PUT",

    "OPTIONS",
    "TRACE",
    "COPY",
    "LOCK",
    "MKCOL",
    "MOVE",
    "PROPFIND",
    "PROPPATCH",
    "SEARCH",
    "UNLOCK",
    "BIND",
    "REBIND",
    "UNBIND",
    "ACL",
    "REPORT",
    "MKACTIVITY",
    "CHECKOUT",
    "MERGE",
    "M-SEARCH",
    "NOTIFY",
    "SUBSCRIBE",
    "UNSUBSCRIBE",
    "PATCH",
    "PURGE",
    "MKCALENDAR",
    "LINK",
    "UNLINK",
    0 };
  const char **VAR_40;
  for (VAR_40 = VAR_39; *VAR_40; VAR_40++) {
    char VAR_41[200];
    FUNC_6(VAR_41, "%s / HTTP/1.1\r\n\r\n", *VAR_40);
    FUNC_27(VAR_41, VAR_13);
  }

  static const char *VAR_42[] = {
      "ASDF",
      "C******",
      "COLA",
      "GEM",
      "GETA",
      "M****",
      "MKCOLA",
      "PROPPATCHA",
      "PUN",
      "PX",
      "SA",
      "hello world",
      0 };
  for (VAR_40 = VAR_42; *VAR_40; VAR_40++) {
    char VAR_43[200];
    FUNC_6(VAR_43, "%s / HTTP/1.1\r\n\r\n", *VAR_40);
    FUNC_27(VAR_43, VAR_11);
  }


  FUNC_27("GET / HTTP/1.1\r\n"
              "name\r\n"
              " : value\r\n"
              "\r\n",
              VAR_10);

  const char *VAR_44 =
    "GET / HTTP/1.1\r\n"
    "X-SSL-Nonsense:   -----BEGIN CERTIFICATE-----\r\n"
    "\tMIIFbTCCBFWgAwIBAgICH4cwDQYJKoZIhvcNAQEFBQAwcDELMAkGA1UEBhMCVUsx\r\n"
    "\tETAPBgNVBAoTCGVTY2llbmNlMRIwEAYDVQQLEwlBdXRob3JpdHkxCzAJBgNVBAMT\r\n"
    "\tAkNBMS0wKwYJKoZIhvcNAQkBFh5jYS1vcGVyYXRvckBncmlkLXN1cHBvcnQuYWMu\r\n"
    "\tdWswHhcNMDYwNzI3MTQxMzI4WhcNMDcwNzI3MTQxMzI4WjBbMQswCQYDVQQGEwJV\r\n"
    "\tSzERMA8GA1UEChMIZVNjaWVuY2UxEzARBgNVBAsTCk1hbmNoZXN0ZXIxCzAJBgNV\r\n"
    "\tBAcTmrsogriqMWLAk1DMRcwFQYDVQQDEw5taWNoYWVsIHBhcmQYJKoZIhvcNAQEB\r\n"
    "\tBQADggEPADCCAQoCggEBANPEQBgl1IaKdSS1TbhF3hEXSl72G9J+WC/1R64fAcEF\r\n"
    "\tW51rEyFYiIeZGx/BVzwXbeBoNUK41OK65sxGuflMo5gLflbwJtHBRIEKAfVVp3YR\r\n"
    "\tgW7cMA/s/XKgL1GEC7rQw8lIZT8RApukCGqOVHSi/F1SiFlPDxuDfmdiNzL31+sL\r\n"
    "\t0iwHDdNkGjy5pyBSB8Y79dsSJtCW/iaLB0/n8Sj7HgvvZJ7x0fr+RQjYOUUfrePP\r\n"
    "\tu2MSpFyf+9BbC/aXgaZuiCvSR+8Snv3xApQY+fULK/xY8h8Ua51iXoQ5jrgu2SqR\r\n"
    "\twgA7BUi3G8LFzMBl8FRCDYGUDy7M6QaHXx1ZWIPWNKsCAwEAAaOCAiQwggIgMAwG\r\n"
    "\tA1UdEwEB/wQCMAAwEQYJYIZIAYb4QgHTTPAQDAgWgMA4GA1UdDwEB/wQEAwID6DAs\r\n"
    "\tBglghkgBhvhCAQ0EHxYdVUsgZS1TY2llbmNlIFVzZXIgQ2VydGlmaWNhdGUwHQYD\r\n"
    "\tVR0OBBYEFDTt/sf9PeMaZDHkUIldrDYMNTBZMIGaBgNVHSMEgZIwgY+AFAI4qxGj\r\n"
    "\tloCLDdMVKwiljjDastqooXSkcjBwMQswCQYDVQQGEwJVSzERMA8GA1UEChMIZVNj\r\n"
    "\taWVuY2UxEjAQBgNVBAsTCUF1dGhvcml0eTELMAkGA1UEAxMCQ0ExLTArBgkqhkiG\r\n"
    "\t9w0BCQEWHmNhLW9wZXJhdG9yQGdyaWQtc3VwcG9ydC5hYy51a4IBADApBgNVHRIE\r\n"
    "\tIjAggR5jYS1vcGVyYXRvckBncmlkLXN1cHBvcnQuYWMudWswGQYDVR0gBBIwEDAO\r\n"
    "\tBgwrBgEEAdkvAQEBAQYwPQYJYIZIAYb4QgEEBDAWLmh0dHA6Ly9jYS5ncmlkLXN1\r\n"
    "\tcHBvcnQuYWMudmT4sopwqlBWsvcHViL2NybC9jYWNybC5jcmwwPQYJYIZIAYb4QgEDBDAWLmh0\r\n"
    "\tdHA6Ly9jYS5ncmlkLXN1cHBvcnQuYWMudWsvcHViL2NybC9jYWNybC5jcmwwPwYD\r\n"
    "\tVR0fBDgwNjA0oDKgMIYuaHR0cDovL2NhLmdyaWQt5hYy51ay9wdWIv\r\n"
    "\tY3JsL2NhY3JsLmNybDANBgkqhkiG9w0BAQUFAAOCAQEAS/U4iiooBENGW/Hwmmd3\r\n"
    "\tXCy6Zrt08YjKCzGNjorT98g8uGsqYjSxv/hmi0qlnlHs+k/3Iobc3LjS5AMYr5L8\r\n"
    "\tUO7OSkgFFlLHQyC9JzPfmLCAugvzEbyv4Olnsr8hbxF1MbKZoQxUZtMVu29wjfXk\r\n"
    "\thTeApBv7eaKCWpSp7MCbvgzm74izKhu3vlDk9w6qVrxePfGgpKPqfHiOoGhFnbTK\r\n"
    "\twTC6o2xq5y0qZ03JonF7OJspEd3I5zKY3E+ov7/ZhW6DqT8UFvsAdjvQbXyhV8Eu\r\n"
    "\tYhixw1aKEPzNjNowuIseVogKOLXxWI5vAi5HgXdS0/ES5gDGsABo4fqovUKlgop3\r\n"
    "\tRA==\r\n"
    "\t-----END CERTIFICATE-----\r\n"
    "\r\n";
  FUNC_27(VAR_44, VAR_13);

  const char *VAR_45 =
    "GET / HTTP/1.1\r\n"
    "Host: www.example.com\r\n"
    "Connection\r\033\065\325eep-Alive\r\n"
    "Accept-Encoding: gzip\r\n"
    "\r\n";
  FUNC_27(VAR_45, VAR_10);

  const char *VAR_46 =
    "GET / HTTP/1.1\r\n"
    "Host: www.example.com\r\n"
    "X-Some-Header\r\033\065\325eep-Alive\r\n"
    "Accept-Encoding: gzip\r\n"
    "\r\n";
  FUNC_27(VAR_46, VAR_10);
  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_28); VAR_30++) {
    FUNC_16(&VAR_28[VAR_30]);
  }

  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_28); VAR_30++) {
    FUNC_19(&VAR_28[VAR_30]);
  }

  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_28); VAR_30++) {
    if (!VAR_28[VAR_30].should_keep_alive) continue;
    for (VAR_31 = 0; VAR_31 < FUNC_0(VAR_28); VAR_31++) {
      if (!VAR_28[VAR_31].should_keep_alive) continue;
      for (VAR_32 = 0; VAR_32 < FUNC_0(VAR_28); VAR_32++) {
        FUNC_21(&VAR_28[VAR_30], &VAR_28[VAR_31], &VAR_28[VAR_32]);
      }
    }
  }

  FUNC_4("request scan 1/4      ");
  FUNC_26( &VAR_28[VAR_6]
           , &VAR_28[VAR_7]
           , &VAR_28[VAR_6]
           );

  FUNC_4("request scan 2/4      ");
  FUNC_26( &VAR_28[VAR_21]
           , &VAR_28[VAR_22]
           , &VAR_28[VAR_5]
           );

  FUNC_4("request scan 3/4      ");
  FUNC_26( &VAR_28[VAR_26]
           , &VAR_28[VAR_2]
           , &VAR_28[VAR_1]
           );

  FUNC_4("request scan 4/4      ");
  FUNC_26( &VAR_28[VAR_24]
           , &VAR_28[VAR_23 ]
           , &VAR_28[VAR_3]
           );

  FUNC_5("requests okay");

  return 0;
}
