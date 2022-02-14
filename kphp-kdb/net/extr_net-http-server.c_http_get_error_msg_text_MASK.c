
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char *FUNC_0 (int *VAR_0) {

  if (*VAR_0 == 200) {
    return "OK";
  }
  switch (*VAR_0) {

    case 201: return "Created";
    case 202: return "Accepted";
    case 204: return "No Content";
    case 206: return "Partial Content";
    case 301: return "Moved Permanently";
    case 302: return "Found";
    case 303: return "See Other";
    case 304: return "Not Modified";
    case 307: return "Temporary Redirect";
    case 400: return "Bad Request";
    case 403: return "Forbidden";
    case 404: return "Not Found";
    case 405: return "Method Not Allowed";
    case 406: return "Not Acceptable";
    case 408: return "Request Timeout";
    case 411: return "Length Required";
    case 413: return "Request Entity Too Large";
    case 414: return "Request-URI Too Long";
    case 418: return "I'm a teapot";
    case 501: return "Not Implemented";
    case 502: return "Bad Gateway";
    case 503: return "Service Unavailable";
    default: *VAR_0 = 500;
  }
  return "Internal Server Error";
}
